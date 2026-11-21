// FUN_0068d5e0  0068d5e0

/* WARNING: Removing unreachable block (ram,0x0068d666) */

int * __thiscall
FUN_0068d5e0(int param_1,int *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *local_b4;
  undefined1 local_44 [11];
  undefined1 local_39;
  undefined1 local_38 [11];
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  bool local_5;
  
  local_10 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  local_c = *(undefined4 **)(param_1 + 4);
  local_5 = true;
  while (*(char *)((int)local_10 + 0x45) == '\0') {
    local_c = local_10;
    local_5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (local_10 + 3));
    if (local_5) {
      local_b4 = (undefined4 *)*local_10;
    }
    else {
      local_b4 = (undefined4 *)local_10[2];
    }
    local_10 = local_b4;
  }
  FUN_0068d4b0(local_c,param_1);
  if (local_5 != false) {
    FUN_0068d4b0(**(undefined4 **)(param_1 + 4),param_1);
    if ((local_18 == 0) || (local_18 != local_2c)) {
      _invalid_parameter_noinfo();
    }
    if (local_14 == local_28) {
      local_2d = 1;
      piVar3 = (int *)FUN_0068d820(local_38,1,local_c,param_3);
      iVar1 = piVar3[1];
      *param_2 = *piVar3;
      param_2[1] = iVar1;
      *(undefined1 *)(param_2 + 2) = local_2d;
      return param_2;
    }
    FUN_0068f800();
  }
  bVar2 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (local_14 + 0xc),param_3);
  if (bVar2) {
    local_39 = 1;
    piVar3 = (int *)FUN_0068d820(local_44,local_5,local_c,param_3);
    iVar1 = piVar3[1];
    *param_2 = *piVar3;
    param_2[1] = iVar1;
    *(undefined1 *)(param_2 + 2) = local_39;
  }
  else {
    *param_2 = local_18;
    param_2[1] = local_14;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return param_2;
}

