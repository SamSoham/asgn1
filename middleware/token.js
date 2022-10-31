module.exports = (req, res, next) => {
  req.user = {
    email: "prerit@gmail.com",
  };
  next();
};
