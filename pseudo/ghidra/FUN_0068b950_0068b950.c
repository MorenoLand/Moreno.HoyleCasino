// FUN_0068b950  0068b950

int __thiscall
FUN_0068b950(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int *piVar3;
  undefined1 local_7c [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_74 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3c [28];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae033;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0068dbf0(param_2);
  local_18 = 0;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  local_1c = *(int *)(param_1 + 4);
  local_20 = 0;
  local_18 = param_1;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  local_20 = param_1;
  if ((local_18 == 0) || (local_18 != param_1)) {
    _invalid_parameter_noinfo();
  }
  if (local_14 != local_1c) {
    bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               (local_14 + 0xc));
    if (!bVar1) goto LAB_0068bade;
  }
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_74);
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_58,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)param_2);
  local_8._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_3c,pbVar2);
  local_8._0_1_ = 2;
  piVar3 = (int *)FUN_0068c500(local_7c,local_18,local_14,local_58);
  local_18 = *piVar3;
  local_14 = piVar3[1];
  local_8._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_74);
LAB_0068bade:
  if (local_18 == 0) {
    _invalid_parameter_noinfo();
  }
  if (local_14 == *(int *)(local_18 + 4)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_10;
  return local_14 + 0x28;
}

