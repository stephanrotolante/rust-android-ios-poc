use reqwest::blocking::Client;

#[no_mangle]
pub extern "C" fn basic_log() {
    println!("This is a test")
}

#[no_mangle]
pub extern "C" fn http_request() {
    let client = Client::new();
    let url = "http://192.168.1.164:7000";

    if let Ok(response) = client.get(url).send() {
        if let Ok(text) = response.text() {
            println!("{}", text);
        } else {
            println!("Failed to parse text")
        }
    } else {
        print!("Failed to make request")
    }
}

#[no_mangle]
pub extern "C" fn basic_operation() {
    let array = [1, 2, 3, 4, 5];

    for item in array.iter() {
        println!("{}", item);
    }
}

#[no_mangle]
pub extern "C" fn return_bool() -> bool {
    return false;
}

#[no_mangle]
pub extern "C" fn return_i32() -> i32 {
    return 93843949;
}
