var express = require('express'); 
var bodyParser = require('body-parser');
var app = express();
const cors=require('cors');
app.use(bodyParser.json());

app.use(cors({
	'origin':'*',
}))
app.use(bodyParser.urlencoded({extended:true}));
app.use(express.static('public'));
app.use('/images', express.static(__dirname + '/public/images'));
app.get('/',function(req,resp)
{
	resp.sendFile(__dirname+"/"+"public/index.html")
});
app.post('/login',function(req,resp)
{
	if(req.body.username=='admin'&& req.body.password=='admin123')
	{
		console.log('Logged in successfully');
		resp.sendFile(__dirname+"/"+"public/success.html")
	}
	else
	{
		console.log('invalid credentials');
		resp.sendFile(__dirname+"/"+"public/error.html")
	}
});

//9th program git proile display
app.get('/github',function (req, resp){
	resp.sendFile(__dirname+"/"+"public/gitppro.html")
});

//for 10th program
app.get('/stock_data',function (req, resp){
	resp.sendFile(__dirname+"/"+"public/stock.html")
});

app.listen(7778,function(){
	console.log('Listening at port 7778');
});
