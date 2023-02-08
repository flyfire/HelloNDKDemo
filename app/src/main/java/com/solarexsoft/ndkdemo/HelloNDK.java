package com.solarexsoft.ndkdemo;

/*
 * Creadted by houruhou on 2023/02/08 16:20
 */
public class HelloNDK {
    static {
        System.loadLibrary("hello");
    }

    public static native String hello();
}
