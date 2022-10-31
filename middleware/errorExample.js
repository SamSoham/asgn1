module.exports = (err, req, res, next) => {
  const error = new Error("The error");
  
  next(error);
};
