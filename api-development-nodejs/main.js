//Requiring packages
const express = require("express"),
  app = express(),
  port = 4000,
  bodyParser = require("body-parser"),
  cors = require("cors"),
  mongoose = require("mongoose");

//Connecting to the database

mongoose
  .connect("mongodb://localhost/apicc", { useNewUrlParser: true })
  .then(() => {
    console.log("Database connected");
  })
  .catch(err => {
    throw err;
  });

//Configure app instance
//Parsing the req object
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());
//Enabling all the HTTP requests
app.use(cors());
//Student API
//name,year,age,subjects

//Define endpoints/routes
const apiRoutes = require("./routes/apiRoutes");
app.use("/api", apiRoutes);

app.listen(port, err => {
  if (err) throw err;
  console.log(`Server running at port ${port}`);
});
