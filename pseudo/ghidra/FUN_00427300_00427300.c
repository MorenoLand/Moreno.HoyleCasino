// FUN_00427300  00427300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00427300(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_1c [6];
  
  uVar5 = 0;
  uVar2 = FUN_00426370(param_2);
  local_1c[5] = FUN_00462ba0(param_1 + 0x6c + param_2 * 10,uVar2,uVar5);
  local_1c[4] = 0;
  local_1c[3] = 0;
  FUN_005dcb00(param_2);
  iVar3 = FUN_005d5a50();
  if (iVar3 < 1000000000) {
    cVar1 = FUN_004272e0(param_2);
    if ((cVar1 == '\0') || (*(int *)(param_1 + 0xb0 + param_2 * 4) == 4)) {
      cVar1 = FUN_004272e0(param_2);
      if ((cVar1 != '\0') && (*(int *)(param_1 + 0xb0 + param_2 * 4) == 4)) {
        uVar4 = FUN_0064c8a0(0xffffffff,0);
        FUN_005dcb00(param_2,uVar4);
        FUN_005d5fb0(uVar4);
      }
    }
    else {
      if (5 < local_1c[5]) {
        if (local_1c[5] == 6) {
          local_1c[3] = 0x32;
        }
        if (local_1c[5] == 7) {
          local_1c[3] = 100;
        }
        if (local_1c[5] == 8) {
          local_1c[3] = 500;
        }
        if (local_1c[5] == 9) {
          local_1c[3] = 20000;
        }
        if (local_1c[5] == 10) {
          local_1c[3] = 200000;
        }
        if (local_1c[3] != 0) {
          *(undefined1 *)(param_1 + param_2 + 0xdc) = 1;
        }
      }
      if (local_1c[3] == 0) {
        uVar4 = FUN_0064c8a0(0xffffffff,0);
        FUN_005dcb00(param_2,uVar4);
        FUN_005d5fb0(uVar4);
      }
      else {
        uVar4 = FUN_0064c8a0(local_1c[3],0);
        FUN_005dcb00(param_2,uVar4);
        FUN_005d5fb0(uVar4);
        uVar4 = FUN_0064c8a0(local_1c[3],0);
        FUN_005dcb00(param_2,uVar4);
        FUN_005d5cf0(uVar4);
      }
    }
    *(undefined1 *)(param_1 + param_2 + 0xd4) = 0;
    if (local_1c[3] != 0) {
      local_1c[0] = 0x3106ca;
      local_1c[1] = 0x3106cb;
      local_1c[2] = 0x3106cc;
      iVar3 = FUN_0062fc30(0,2,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      (**(code **)(*DAT_0162ee84 + 0x80))(local_1c[iVar3]);
    }
  }
  return;
}

