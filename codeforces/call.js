
function nonf(s)
{
   let count=new Array(256).fill(0)
   let i;
   for( i=0;i<s.length;i++)
   {
    count[s[i].charCodeAt(0)]++;
   }
   return count
}

function nonrep(s)
{
    let count=nonf(s)
    let index=-1
    let i;
    for(i=0;i<s.length;i++)
    {
        if(count[s[i].charCodeAt(0)]==1)
        {
            index=i
            break
        }
    }
    return index
}

let str="aabccdeff"
let index=nonrep(str)
if(index==-1)
{
    console.log("NULL")
}
else{
    console.log("found"+index)
}