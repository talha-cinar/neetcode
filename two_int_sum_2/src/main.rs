fn main() 
{
    let v = vec![1,2,5,9,11,26,39];
    let target = 35;        
    let result = two_sum(v,target);
    for num in result
    {
        println!("{num}");
    }
}

fn two_sum(v: Vec<i32>, target : i32) -> Vec<i32> 
{
    let n = v.len();
    let mut leftp = 0;
    let mut rightp = n-1;
    while rightp>leftp
    {
        let sum = v[leftp] + v[rightp];
        if sum==target
        {
            leftp +=1;
            rightp +=1;
            return vec![ leftp as i32 ,rightp as i32];
        }
        else if sum < target
        {
            leftp +=1;
        }
        else
        {
            rightp -=1;
        }
    }
    println!("Target could not be achieved with this set.");
    return vec![];
    }




