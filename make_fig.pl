#!/usr/bin/perl
#
#
@files = <*.C>;

$label = 0;

foreach $file (@files) {
      $label++;

      print ("root -b -q $file\n");
    }
