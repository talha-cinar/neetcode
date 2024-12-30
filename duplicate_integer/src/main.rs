//Be careful this uses HashSet- when you want to store unique things use HashSet.

use std::io;
use std::collections::HashSet;

fn main() 
{
    println!("This program checks if Given an integer array nums, return true if any value appears more than once in the array");
    println!("Provide integers, then press q");
    let q = String::from("q");
    let mut v: Vec<i32> = Vec::new();
    loop
    {
        let mut a = String::new();
        io::stdin()
            .read_line(&mut a)
            .expect("Failed to read line!");

        if a[0..1] == q[0..1]
        {
            break;
        }

        let a: i32 = a.trim().parse().expect("Please type an integer!");
        v.push(a);
    }

    let mut hashset = HashSet::new();

    for n in v
    {
        if hashset.contains(&n)    
        {
            println!("True");
            return
        }

        hashset.insert(n);
    }
    println!("False")
}
