const router = require("express").Router();
const userController = require("../controllers/user.controllers");
const tokenMiddleware = require("../middleware/token");
const errorExample = require("../middleware/errorExample");
router.get("/getUsers", tokenMiddleware, userController);
router.post("/create", errorExample, (err, req, res, next) => {
  if (err) {
    console.log(err);
  } else {
    const email = req.body.email;
    const password = req.body.password;
    // create and store user in db
    res.json({
      email,
      password,
    });
  }
});
module.exports = router;
