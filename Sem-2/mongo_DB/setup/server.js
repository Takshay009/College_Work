import express from "express";
import cors from "cors";

const app = express();
const PORT = 3001;

// middleware 

app.use(cors());
app.use(express.json());


// test route
app.get("/" , (req,res)=>{
    res.send("hello world");
});

// start server
app.listen(PORT , ()=>{
    console.log(`server is running on port http://localhost:${PORT}`);
});

// start server 

