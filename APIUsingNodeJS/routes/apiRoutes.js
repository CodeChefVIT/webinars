const express = require("express"),
  router = express.Router(),
  user = require("../models/User");

//Creating a student(POST)
router.post("/", (req, res) => {
  //Creates the student and then saves them
  if (!req.body) {
    res.json({ message: "Object not complete" }).status(400);
  }
  user
    .create(req.body)
    .then(createdUser => {
      res.json(createdUser).status(201);
    })
    .then(err => {
      throw err;
    });
});
//Getting all the students(GET)
router.get("/", (req, res) => {
  user
    .find()
    .then(allUsers => {
      res.json(allUsers).status(200);
    })
    .then(err => {
      throw err;
    });
});
//Getting a particular student
router.get("/:studentId", (req, res) => {
  const id = req.params.studentId;

  user
    .findById(id)
    .then(foundStudent => {
      res.json(foundStudent).status(200);
    })
    .then(err => {
      throw err;
    });
});
//Updating a particular student(PUT)
router.put("/:studentId", (req, res) => {
  const id = req.params.studentId;
  user
    .findOneAndUpdate({ _id: id }, req.body, { new: true })
    .then(updatedStudent => {
      res.json(updatedStudent).status(200);
    })
    .then(err => {
      throw err;
    });
});
//Deleting student(DELETE)
router.delete("/:studentId", (req, res) => {
  user
    .findByIdAndDelete(req.params.studentId)
    .then(deletedUser => {
      res.json({
        message: "Deleted it",
        student: deletedUser
      });
    })
    .catch(err => {
      throw err;
    });
});

module.exports = router;
