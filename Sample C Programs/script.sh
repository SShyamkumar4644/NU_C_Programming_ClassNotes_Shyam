 #!/usr/bin/perl
 $pow=1;
 $dec=0;
 die("no arguments\n")if(@ARGV==0);
 foreach $num(@ARGV)
 {
     $bin=$num;
     until($num==0)
                 {
          $bit=$num%10;
          $dec=$dec+($bit*$pow);
          $pow=$pow*2;
          $num=$num/10;
     }
     print("the decimal no. of $bin is $dec\n");
     $pow=1;
                 $dec=0;
 }