package com.thegreatapi.ahundreddaysofjava.day095;

import net.datafaker.Faker;

import java.util.Date;
import java.util.List;
import java.util.stream.IntStream;

public class Day095 {

    private static final Faker FAKER = new Faker();

    public static void main(String[] args) {
        List<Person> people = IntStream.rangeClosed(1, 10)
                                       .mapToObj(i -> createPerson())
                                       .toList();

        people.forEach(System.out::println);

//    or another way to do the same
          people = FAKER.<Person>collection().suppliers(Day095::createPerson).len(10).generate();
          people.forEach(System.out::println);
    }

    private static Person createPerson() {
        return new Person(
                FAKER.name().firstName(),
                FAKER.name().lastName(),
                FAKER.date().birthday()
        );
    }

    static record Person(String firstName, String lastName, Date dateOfBirth) {
    }
}