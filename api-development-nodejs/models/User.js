const mongoose = require("mongoose");

//name,year,age,subjects

const UserSchema = new mongoose.Schema({
  name: {
    type: String,
    required: true
  },
  age: {
    type: Number,
    required: true
  },
  year: {
    type: Number,
    required: true
  },
  subjects: {
    type: Array
  },
  timestamp: {
    type: String,
    default: Date.now()
  }
});

module.exports = mongoose.model("user", UserSchema);
