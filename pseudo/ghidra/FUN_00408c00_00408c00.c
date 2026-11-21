// FUN_00408c00  00408c00

void FUN_00408c00(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_8;
  
  FUN_004091b0();
  FUN_004091d0();
  uVar6 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_1,uVar6);
  FUN_005d6050(uVar6);
  FUN_005dcb00(param_1);
  iVar3 = FUN_005d52e0();
  cVar1 = *(char *)(iVar3 + 0x2a);
  local_8 = param_1 * 3;
  do {
    if (param_1 * 3 + 3 <= local_8) {
      return;
    }
    cVar2 = FUN_005cb920();
    if (cVar2 != '\0') {
      iVar3 = FUN_00408aa0(param_1,local_8);
      if ((((iVar3 == 1) || (iVar3 == 8)) || (iVar3 == 9)) &&
         (iVar4 = FUN_005dcb00(param_1), *(int *)(iVar4 + 0x4a8) < 0)) {
        iVar4 = FUN_005dcb00(param_1);
        if (*(int *)(iVar4 + 0x4a8) < -3) {
          *(undefined1 *)(DAT_007902f0 + param_1 + 0xb8) = 1;
        }
        iVar4 = FUN_005dcb00(param_1);
        *(undefined4 *)(iVar4 + 0x4a8) = 0;
      }
      FUN_004098c0(param_1,iVar3);
      FUN_005dcb00(param_1);
      iVar3 = FUN_005d52e0();
      if ((cVar1 != *(char *)(iVar3 + 0x2a)) && (*(char *)(iVar3 + 0x2a) == '\0')) {
        piVar5 = (int *)FUN_005dcb00(param_1);
        (**(code **)(*piVar5 + 4))(0xffffffff);
        uVar6 = FUN_0064c8a0(0,0);
        FUN_005dcb00(param_1,uVar6);
        FUN_005d6050(uVar6);
        return;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

