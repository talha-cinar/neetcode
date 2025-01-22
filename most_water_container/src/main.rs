use std::cmp;

fn main() 
{
    let height = vec![1,7,2,5,4,7,3,6];
    //let height = vec![2,2,2];
    let result = max_area(height);
    println!("{:?}", result);
}

fn max_area(height : Vec<i32>) -> i32
{
    let n = height.len();
    let mut leftp = 0;
    let mut rightp = n-1;
    let mut max = 0;
    while leftp < rightp
    {
        let area = cmp::min(height[leftp],height[rightp]) * (rightp as i32 - leftp as i32);
        if area > max
        {
            max = area;
        }
        if height[rightp] > height[leftp]
        {
            leftp +=1;
        }
        else
        {
            rightp -=1;
        }
        
    }
    max
}
