module.exports = (req, res) => {
  const email = req.user.email;
  res.json({ email, message: "users controller" });
};
