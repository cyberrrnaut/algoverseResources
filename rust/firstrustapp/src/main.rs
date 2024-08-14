// fn main() {
//     let message: String = String::from("hello world");

//     // Get the character at the desired index (for example, index 1)
//     let char1 = message.chars().nth(1);

//     match char1 {
//         Some(c) => println!("{}", c),
//         None => println!("No character at the specified index"),
//     }

//     // Here we match again or use unwrap_or to print a default value if it's None
//     println!("Character at index 1: {}", char1.unwrap_or('_'));
// }

// fn main() {
   
//    for i in 0..10 {
//     print!("{}",i);
//    }

//    println!("{}","");
// }


fn main(){

    let sentence :String= String::from("My name is cyb3rnaut");
    let first_word :String = get_firstword(&sentence);
    println!("The first char is {}", first_word);
}


fn get_firstword(sentence: &String)->String{
 let mut ans = String::from("");
 for char in sentence.chars(){
   
    if char==' '{

        break;
    }
     ans.push(char);
 }
 return ans;
}