app.post('/webhook', function(req,res) {
  console.log('Received post request');
  if (!req.body) return res.sendStatus(400)
  res.setHeader('Content-Type','application/json');
  console.log('Here is the DialogFlow Post Request');
  console.log(req.body);
  console.log('Got request from DialogFlow'+ req.body.queryResult.parameters['geo-city']);
  return res.json("Puppies");
})
