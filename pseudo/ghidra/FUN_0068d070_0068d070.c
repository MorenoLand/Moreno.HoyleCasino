// FUN_0068d070  0068d070

/* WARNING: Removing unreachable block (ram,0x0068d0b6) */

int * __thiscall FUN_0068d070(int param_1,int *param_2,char param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [28];
  undefined **local_40 [10];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae0c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x6666664 < *(uint *)(param_1 + 8)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_5c,"map/set<T> too long");
    local_8 = 0;
    FUN_0068d440(local_5c);
    local_40[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_40,(ThrowInfo *)&DAT_006fc53c);
  }
  local_18 = FUN_0068e670(*(undefined4 *)(param_1 + 4),param_4,*(undefined4 *)(param_1 + 4),param_5,
                          0,DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  local_14 = local_18;
  if (param_4 == *(int **)(param_1 + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = local_18;
    **(int **)(param_1 + 4) = local_18;
    *(int *)(*(int *)(param_1 + 4) + 8) = local_18;
  }
  else if (param_3 == '\0') {
    param_4[2] = local_18;
    if (param_4 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int *)(*(int *)(param_1 + 4) + 8) = local_18;
    }
  }
  else {
    *param_4 = local_18;
    if (param_4 == (int *)**(int **)(param_1 + 4)) {
      **(int **)(param_1 + 4) = local_18;
    }
  }
  while (*(char *)(*(int *)(local_18 + 4) + 0x34) == '\0') {
    if (*(int *)(local_18 + 4) == **(int **)(*(int *)(local_18 + 4) + 4)) {
      iVar1 = *(int *)(*(int *)(*(int *)(local_18 + 4) + 4) + 8);
      if (*(char *)(iVar1 + 0x34) == '\0') {
        *(undefined1 *)(*(int *)(local_18 + 4) + 0x34) = 1;
        *(undefined1 *)(iVar1 + 0x34) = 1;
        *(undefined1 *)(*(int *)(*(int *)(local_18 + 4) + 4) + 0x34) = 0;
        local_18 = *(int *)(*(int *)(local_18 + 4) + 4);
      }
      else {
        if (local_18 == *(int *)(*(int *)(local_18 + 4) + 8)) {
          local_18 = *(int *)(local_18 + 4);
          FUN_0068e3c0(local_18);
        }
        *(undefined1 *)(*(int *)(local_18 + 4) + 0x34) = 1;
        *(undefined1 *)(*(int *)(*(int *)(local_18 + 4) + 4) + 0x34) = 0;
        FUN_0068e470(*(undefined4 *)(*(int *)(local_18 + 4) + 4));
      }
    }
    else {
      iVar1 = **(int **)(*(int *)(local_18 + 4) + 4);
      if (*(char *)(iVar1 + 0x34) == '\0') {
        *(undefined1 *)(*(int *)(local_18 + 4) + 0x34) = 1;
        *(undefined1 *)(iVar1 + 0x34) = 1;
        *(undefined1 *)(*(int *)(*(int *)(local_18 + 4) + 4) + 0x34) = 0;
        local_18 = *(int *)(*(int *)(local_18 + 4) + 4);
      }
      else {
        if (local_18 == **(int **)(local_18 + 4)) {
          local_18 = *(int *)(local_18 + 4);
          FUN_0068e470(local_18);
        }
        *(undefined1 *)(*(int *)(local_18 + 4) + 0x34) = 1;
        *(undefined1 *)(*(int *)(*(int *)(local_18 + 4) + 4) + 0x34) = 0;
        FUN_0068e3c0(*(undefined4 *)(*(int *)(local_18 + 4) + 4));
      }
    }
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x34) = 1;
  *param_2 = 0;
  param_2[1] = local_14;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = param_1;
  ExceptionList = local_10;
  return param_2;
}

