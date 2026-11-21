// FUN_004512c0  004512c0

void __thiscall FUN_004512c0(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_00450e70(&local_10,&local_14);
  if (*(int *)(param_1 + 0x2f4) == 7) {
    if (((*(char *)(param_1 + 0x2be) == '\0') ||
        (*(int *)(param_1 + 0x2fc) == *(int *)(param_1 + 0x2f0))) ||
       (*(int *)(param_1 + 0x2fc) == *(int *)(param_1 + 0x2ec))) {
      *param_2 = 0;
      *param_3 = 1;
    }
    else {
      iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4));
      local_8 = (uint)(iVar1 != -1);
      if (((*(int *)(param_1 + 0x2fc) == *(int *)(param_1 + 0x2e8)) ||
          (*(int *)(param_1 + 0x2fc) == *(int *)(param_1 + 0x2e4))) ||
         (*(int *)(param_1 + 0x2fc) == *(int *)(param_1 + 0x2e0))) {
        *param_2 = (uint)(local_8 == 0);
        *param_3 = 2;
      }
      else {
        if (*(int *)(param_1 + 0x2fc) != *(int *)(param_1 + 0x2dc)) {
          FUN_005e9f20("jokerRankInStraight == straight[1]","..\\Casino\\paigowai.cpp",0x45c);
        }
        if (*(int *)(param_1 + 0x2d8) == 1) {
          *param_2 = 0;
          *param_3 = 1;
        }
        else if (*(int *)(param_1 + 0x2f0) == 0xe) {
          *param_2 = (uint)(local_8 == 0);
          *param_3 = 2;
        }
        else {
          *param_2 = local_8;
          *param_3 = 6;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x2f4) == 6) {
    *param_2 = local_10;
    if (*(int *)(param_1 + 0x2d8) == 1) {
      for (local_c = 0; (int)local_c < 7; local_c = local_c + 1) {
        iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
        if ((iVar1 == 0xe) && (local_c != *param_2)) {
          *param_3 = local_c;
          break;
        }
      }
    }
    else {
      for (local_c = 0; (int)local_c < 7; local_c = local_c + 1) {
        if ((local_c != local_10) &&
           ((iVar1 = FUN_0044f680(CONCAT22((short)(local_c >> 0x10),
                                           *(undefined2 *)(param_1 + 4 + local_c * 2))),
            iVar1 == *(int *)(param_1 + 0x2ec) ||
            ((iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar1 == -1 &&
             (*(int *)(param_1 + 0x2fc) == *(int *)(param_1 + 0x2ec))))))) {
          *param_3 = local_c;
          break;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x2f4) == 5) {
    *param_2 = local_10;
    *param_3 = local_14;
  }
  return;
}

