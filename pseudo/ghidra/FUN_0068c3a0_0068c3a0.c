// FUN_0068c3a0  0068c3a0

undefined4 * __thiscall
FUN_0068c3a0(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  local_8 = *(undefined4 **)(param_1 + 4);
  while (*(char *)((int)local_c + 0x35) == '\0') {
    bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (local_c + 3),param_2);
    if (bVar1) {
      local_c = (undefined4 *)local_c[2];
    }
    else {
      local_8 = local_c;
      local_c = (undefined4 *)*local_c;
    }
  }
  return local_8;
}

