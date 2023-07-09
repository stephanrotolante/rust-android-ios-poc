//
//  ViewController.swift
//  Amalagation
//
//  Created by Stephan Rotolante on 4/5/23.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var testText: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let some_int = test_fn();
        let int_to_string = String(some_int);
        
        testText.text = int_to_string;
    }


}

