const express = require("express");

const app = express();

app.use(express.json({ extended: true }));
app.use(express.urlencoded({ extended: true }));

const indexRoutes = require("./routes/index");

app.use("/api/users/", indexRoutes);

app.listen(8000, (err) => {
  if (err) {
    console.log("error starting server");
  } else {
    // connect db
    console.log("Server started...");
  }
});
