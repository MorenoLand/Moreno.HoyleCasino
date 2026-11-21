// FUN_004817b0  004817b0

undefined4 FUN_004817b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = FUN_00480c80();
  FUN_00481500(uVar2,&local_8,&local_10,&local_c);
  if (((param_1 == local_8) || (param_1 == local_10)) || (param_1 == local_c)) {
    uVar2 = 1;
  }
  else if (local_c == -1) {
    uVar2 = 0;
  }
  else {
    FUN_0047e390(param_1);
    cVar1 = FUN_004c61b0();
    if ((cVar1 != '\0') && (param_1 != local_c)) {
      FUN_005dcb00(param_1);
      iVar3 = FUN_005d5a50();
      FUN_005dcb00(local_c);
      iVar4 = FUN_005d5a50();
      if (iVar3 == iVar4) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

