// FUN_0058d9d0  0058d9d0

void __thiscall FUN_0058d9d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_3c [14];
  
  local_3c[0] = 0x14;
  local_3c[1] = 10;
  local_3c[2] = 5;
  local_3c[3] = 1;
  local_3c[6] = 0x46;
  local_3c[7] = 0x1c;
  local_3c[8] = 0xe;
  local_3c[9] = 7;
  local_3c[10] = 0x14;
  local_3c[0xb] = 10;
  local_3c[0xc] = 5;
  local_3c[0xd] = 2;
  local_3c[4] = 10;
  local_3c[5] = 5;
  if (*(int *)(param_1 + 0x84) == 0) {
    FUN_0058d840(DAT_00793584 + 0x3ba4 + param_2 * 0x10);
    FUN_0058a4e0(param_2);
  }
  else {
    cVar1 = FUN_00600230();
    if (cVar1 == '\0') {
      iVar2 = FUN_0058a470();
      if (iVar2 == 0x14) {
        FUN_00585ad0(local_3c[param_2 + 4]);
      }
      else {
        iVar2 = FUN_0058a470();
        if (9 < iVar2) {
          iVar2 = FUN_0058a470();
          if (iVar2 < 0x14) {
            FUN_00585ad0(local_3c[param_2 + 10]);
            goto LAB_0058db25;
          }
        }
        FUN_00585ad0(local_3c[param_2]);
      }
    }
    else {
      FUN_00585ad0(local_3c[param_2 + 6]);
    }
  }
LAB_0058db25:
  FUN_0058dce0();
  return;
}

