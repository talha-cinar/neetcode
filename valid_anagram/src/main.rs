use std::collections::HashMap;

fn main()
{
    let s = String::from("racecar");
    let t = String::from("carrace");
    if are_anagrams(s,t)
    {
        println!("Anagrams");
    }
    else 
    {
        println!("Not Anagrams")
    }
}


fn are_anagrams(s: String, t:String ) -> bool 
{
    if s.len() != t.len()
    {
        return false;
    }
    let mut hash = HashMap::new();

    for i in s.chars()
    {
        *hash.entry(i).or_insert(0)+=1;
        
    }

    for i in t.chars()
    {
        *hash.entry(i).or_insert(0)-=1;
    }

    hash.values().all(|&v| v==0)
    
}
