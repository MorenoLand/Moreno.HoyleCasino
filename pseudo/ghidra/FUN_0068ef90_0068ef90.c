// FUN_0068ef90  0068ef90

undefined4 * __thiscall
FUN_0068ef90(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *local_d8;
  int *local_d4;
  int *local_78;
  int *local_70;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [28];
  undefined **local_48 [10];
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae279;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)param_4 + 0x45) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_64,"invalid map/set<T> iterator");
    local_8 = 0;
    FUN_0068d440(local_64);
    local_48[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_00702f5c);
  }
  local_14 = param_4;
  FUN_0068edc0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_1c = local_14;
  if (*(char *)(*local_14 + 0x45) == '\0') {
    if (*(char *)(local_14[2] + 0x45) == '\0') {
      local_1c = param_4;
      local_18 = (int *)param_4[2];
    }
    else {
      local_18 = (int *)*local_14;
    }
  }
  else {
    local_18 = (int *)local_14[2];
  }
  if (local_1c == local_14) {
    local_20 = (int *)local_14[1];
    if (*(char *)((int)local_18 + 0x45) == '\0') {
      local_18[1] = (int)local_20;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == local_14) {
      *(int **)(*(int *)(param_1 + 4) + 4) = local_18;
    }
    else if ((int *)*local_20 == local_14) {
      *local_20 = (int)local_18;
    }
    else {
      local_20[2] = (int)local_18;
    }
    if ((int *)**(undefined4 **)(param_1 + 4) == local_14) {
      local_d4 = local_20;
      if (*(char *)((int)local_18 + 0x45) == '\0') {
        for (local_70 = local_18; *(char *)(*local_70 + 0x45) == '\0'; local_70 = (int *)*local_70)
        {
        }
        local_d4 = local_70;
      }
      **(undefined4 **)(param_1 + 4) = local_d4;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 8) == local_14) {
      local_d8 = local_20;
      if (*(char *)((int)local_18 + 0x45) == '\0') {
        local_78 = local_18;
        while (*(char *)(local_78[2] + 0x45) == '\0') {
          local_78 = (int *)local_78[2];
        }
        local_d8 = local_78;
      }
      *(int **)(*(int *)(param_1 + 4) + 8) = local_d8;
    }
  }
  else {
    *(int **)(*local_14 + 4) = local_1c;
    *local_1c = *local_14;
    if (local_1c == (int *)local_14[2]) {
      local_20 = local_1c;
    }
    else {
      local_20 = (int *)local_1c[1];
      if (*(char *)((int)local_18 + 0x45) == '\0') {
        local_18[1] = (int)local_20;
      }
      *local_20 = (int)local_18;
      local_1c[2] = local_14[2];
      *(int **)(local_14[2] + 4) = local_1c;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == local_14) {
      *(int **)(*(int *)(param_1 + 4) + 4) = local_1c;
    }
    else if (*(int **)local_14[1] == local_14) {
      *(int **)local_14[1] = local_1c;
    }
    else {
      *(int **)(local_14[1] + 8) = local_1c;
    }
    local_1c[1] = local_14[1];
    iVar1 = local_1c[0x11];
    *(char *)(local_1c + 0x11) = (char)local_14[0x11];
    *(char *)(local_14 + 0x11) = (char)iVar1;
  }
  if ((char)local_14[0x11] != '\x01') {
LAB_0068f4c2:
    FUN_0068fa90(local_14);
    operator_delete(local_14);
    if (*(int *)(param_1 + 8) != 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
    *param_2 = param_3;
    param_2[1] = param_4;
    ExceptionList = local_10;
    return param_2;
  }
LAB_0068f2bd:
  if ((local_18 == *(int **)(*(int *)(param_1 + 4) + 4)) || ((char)local_18[0x11] != '\x01'))
  goto LAB_0068f4bb;
  if (local_18 == (int *)*local_20) {
    local_1c = (int *)local_20[2];
    if ((char)local_1c[0x11] == '\0') {
      *(undefined1 *)(local_1c + 0x11) = 1;
      *(undefined1 *)(local_20 + 0x11) = 0;
      FUN_0068eb50(local_20);
      local_1c = (int *)local_20[2];
    }
    if (*(char *)((int)local_1c + 0x45) == '\0') {
      if ((*(char *)(*local_1c + 0x44) != '\x01') || (*(char *)(local_1c[2] + 0x44) != '\x01')) {
        if (*(char *)(local_1c[2] + 0x44) == '\x01') {
          *(undefined1 *)(*local_1c + 0x44) = 1;
          *(undefined1 *)(local_1c + 0x11) = 0;
          FUN_0068ec00(local_1c);
          local_1c = (int *)local_20[2];
        }
        *(char *)(local_1c + 0x11) = (char)local_20[0x11];
        *(undefined1 *)(local_20 + 0x11) = 1;
        *(undefined1 *)(local_1c[2] + 0x44) = 1;
        FUN_0068eb50(local_20);
LAB_0068f4bb:
        *(undefined1 *)(local_18 + 0x11) = 1;
        goto LAB_0068f4c2;
      }
      *(undefined1 *)(local_1c + 0x11) = 0;
    }
    local_18 = local_20;
  }
  else {
    local_1c = (int *)*local_20;
    if ((char)local_1c[0x11] == '\0') {
      *(undefined1 *)(local_1c + 0x11) = 1;
      *(undefined1 *)(local_20 + 0x11) = 0;
      FUN_0068ec00(local_20);
      local_1c = (int *)*local_20;
    }
    if (*(char *)((int)local_1c + 0x45) == '\0') {
      if ((*(char *)(local_1c[2] + 0x44) != '\x01') || (*(char *)(*local_1c + 0x44) != '\x01')) {
        if (*(char *)(*local_1c + 0x44) == '\x01') {
          *(undefined1 *)(local_1c[2] + 0x44) = 1;
          *(undefined1 *)(local_1c + 0x11) = 0;
          FUN_0068eb50(local_1c);
          local_1c = (int *)*local_20;
        }
        *(char *)(local_1c + 0x11) = (char)local_20[0x11];
        *(undefined1 *)(local_20 + 0x11) = 1;
        *(undefined1 *)(*local_1c + 0x44) = 1;
        FUN_0068ec00(local_20);
        goto LAB_0068f4bb;
      }
      *(undefined1 *)(local_1c + 0x11) = 0;
      local_18 = local_20;
    }
    else {
      local_18 = local_20;
    }
  }
  local_20 = (int *)local_18[1];
  goto LAB_0068f2bd;
}

