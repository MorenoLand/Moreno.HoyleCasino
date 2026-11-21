// FUN_0068b720  0068b720

int __thiscall
FUN_0068b720(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_5c [20];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [40];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006adff2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0068c3a0(param_2);
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
    if (!bVar1) goto LAB_0068b8b6;
  }
  uVar2 = FUN_0068c4d0();
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)param_2);
  local_8._0_1_ = 1;
  FUN_0068d530(uVar2);
  local_8._0_1_ = 2;
  piVar3 = (int *)FUN_0068bc00(local_5c,local_18,local_14,local_48);
  local_18 = *piVar3;
  local_14 = piVar3[1];
  local_8._0_1_ = 3;
  FUN_0068dc60();
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
  local_8 = 0xffffffff;
  FUN_0068dc60();
LAB_0068b8b6:
  if (local_18 == 0) {
    _invalid_parameter_noinfo();
  }
  if (local_14 == *(int *)(local_18 + 4)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_10;
  return local_14 + 0x28;
}

