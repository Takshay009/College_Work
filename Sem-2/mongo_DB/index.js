
const {MongoClient} = require("mongodb");

const URL = "mongodb://localhost:27017";

const dbname = "mydb";

const client = new MongoClient(URL);



async function main() {

    // try {
        await client.connect();
        const db = client.db(dbname);
        console.log("Connected to MongoDB");
        
        // Your database operations here
    // } 
}

main();