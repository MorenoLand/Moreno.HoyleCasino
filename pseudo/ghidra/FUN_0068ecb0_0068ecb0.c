// FUN_0068ecb0  0068ecb0

void FUN_0068ecb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae24a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0068fa30(1,0);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 3),
               param_4);
    local_8._0_1_ = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 10),
               param_4 + 0x1c);
    *(undefined1 *)(puVar1 + 0x11) = param_5;
    *(undefined1 *)((int)puVar1 + 0x45) = 0;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0068eda0();
  return;
}

