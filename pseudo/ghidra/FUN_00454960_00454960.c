// FUN_00454960  00454960

undefined4 __thiscall FUN_00454960(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_1c = *(undefined4 *)(param_1 + 0x2f8);
  local_24 = 0xffffffff;
  local_14 = -1;
  FUN_004517a0(&local_20,&local_10,&local_8);
  cVar1 = FUN_00451870(local_8,local_20,local_10,&local_24,&local_14);
  if (cVar1 == '\0') {
    if (local_8 == 0xe) {
      if ((((*(int *)(param_1 + 0x2f4) == 5) && (*(int *)(param_1 + 0x2d8) != 1)) &&
          (*(int *)(param_1 + 0x2e8) != 0xe)) || (*(int *)(param_1 + 0x2f4) == 6)) {
        local_24 = local_20;
        for (local_c = 2; local_c < 7; local_c = local_c + 1) {
          iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (*(int *)(param_1 + 0x2e8) < iVar3) {
LAB_00454a7b:
            local_14 = local_c;
            break;
          }
          iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar3 < *(int *)(param_1 + 0x2d8)) goto LAB_00454a7b;
        }
        FUN_0044f840(local_24,local_14,param_2,param_3);
        uVar2 = 3;
      }
      else if (*(int *)(param_1 + 0x2f4) == 7) {
        local_24 = local_20;
        local_14 = 2;
        FUN_0044f840(local_20,2,param_2,param_3);
        uVar2 = 3;
      }
      else {
        local_24 = 2;
        local_14 = 3;
        FUN_0044f840(2,3,param_2,param_3);
        if (*(int *)(param_1 + 0x2d8) == 1) {
          uVar2 = 1;
        }
        else {
          uVar2 = 4;
        }
      }
    }
    else {
      for (local_c = 0; local_c < 7; local_c = local_c + 1) {
        iVar3 = FUN_0044f6c0(CONCAT22((short)((uint)local_c >> 0x10),
                                      *(undefined2 *)(param_1 + 4 + local_c * 2)));
        if (iVar3 == -1) {
          local_28 = *(int *)(param_1 + 0x2fc);
        }
        else {
          local_28 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
        }
        if ((*(int *)(param_1 + 0x2e8) < local_28) || (local_28 < *(int *)(param_1 + 0x2d8))) {
          local_18 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
          break;
        }
      }
      if (((((*(int *)(param_1 + 0x2e8) + 1 < local_18) || (local_8 < 7)) ||
           (*(int *)(param_1 + 0x2e8) < 10)) ||
          (*(int *)(param_1 + 0x2e8) == *(int *)(param_1 + 0x2fc))) ||
         (((((*(int *)(param_1 + 0x2e8) != 10 || ((local_8 != 9 && (local_8 != 10)))) &&
            ((*(int *)(param_1 + 0x2e8) != 0xb || ((local_8 < 7 || (0xc < local_8)))))) &&
           ((*(int *)(param_1 + 0x2e8) != 0xc ||
            (((*(int *)(param_1 + 0x2fc) != 0xb || (local_8 < 8)) || (0xc < local_8)))))) &&
          ((((((*(int *)(param_1 + 0x2e8) != 0xc || (*(int *)(param_1 + 0x2fc) == 0xb)) ||
              (local_8 < 8)) || (0xc < local_8)) &&
            (((*(int *)(param_1 + 0x2e8) != 0xd || (*(int *)(param_1 + 0x2fc) != 0xc)) ||
             ((local_8 < 9 || (0xc < local_8)))))) &&
           ((((*(int *)(param_1 + 0x2e8) != 0xd || (*(int *)(param_1 + 0x2fc) == 0xc)) ||
             (local_8 < 9)) || (0xd < local_8)))))))) {
        FUN_00451f60(&local_24,&local_14);
        FUN_0044f840(local_24,local_14,param_2,param_3);
        uVar2 = 1;
      }
      else {
        local_24 = 0;
        for (local_c = 1; local_c < 7; local_c = local_c + 1) {
          iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar3 != local_8) {
            local_14 = local_c;
            break;
          }
        }
        FUN_0044f840(local_24,local_14,param_2,param_3);
        uVar2 = 2;
      }
    }
  }
  else {
    FUN_0044f840(local_24,local_14,param_2,param_3);
    uVar2 = 0;
  }
  return uVar2;
}

