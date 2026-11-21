// FUN_0044ddc0  0044ddc0

void __thiscall FUN_0044ddc0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_14;
  int local_8;
  
  local_14 = FUN_00462ba0(param_1 + 0x98 + param_2 * 10,5,0);
  if ((local_14 == 2) && (iVar3 = FUN_004639e0(param_1 + 0x98 + param_2 * 10,5), iVar3 < 10)) {
    local_14 = 1;
  }
  if (local_14 == 1) {
    *(undefined4 *)(param_1 + 0xdc + param_2 * 4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xdc + param_2 * 4) = 1;
  }
  uVar5 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_2,uVar5);
  FUN_005d6050(uVar5);
  FUN_005dcb00(param_2);
  iVar3 = FUN_005d52e0();
  cVar1 = *(char *)(iVar3 + 0x2a);
  local_8 = 0;
  do {
    if (2 < local_8) {
      return;
    }
    cVar2 = FUN_005cb7d0(param_2,0);
    if (cVar2 != '\0') {
      FUN_0044e340(param_2,local_14);
      FUN_005dcb00(param_2);
      iVar3 = FUN_005d52e0();
      if ((cVar1 != *(char *)(iVar3 + 0x2a)) && (*(char *)(iVar3 + 0x2a) == '\0')) {
        piVar4 = (int *)FUN_005dcb00(param_2);
        (**(code **)(*piVar4 + 4))(0xffffffff);
        uVar5 = FUN_0064c8a0(0,0);
        FUN_005dcb00(param_2,uVar5);
        FUN_005d6050(uVar5);
        return;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

