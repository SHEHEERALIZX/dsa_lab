const axios = require('axios')



axios.get('https://www.instagram.com/p/Ce5fbq9hoSZ/').then((res)=>{
    console.log(res.data);
})