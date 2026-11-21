// FUN_005bb750  005bb750

void FUN_005bb750(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [28];
  undefined **local_38 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7fd2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_54,"vector<T> too long");
  local_8 = 0;
  std::exception::exception((exception *)local_38);
  local_8._0_1_ = 1;
  local_38[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_54);
  local_8 = (uint)local_8._1_3_ << 8;
  local_38[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_006fc53c);
}

