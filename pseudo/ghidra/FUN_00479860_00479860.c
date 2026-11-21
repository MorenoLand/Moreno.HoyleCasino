// FUN_00479860  00479860

int __fastcall FUN_00479860(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar2 = FUN_0047f950(param_1);
    if (iVar2 <= iVar4) {
      return 0;
    }
    uVar3 = FUN_0047e390(iVar4);
    cVar1 = FUN_004c61b0(param_1,iVar4,uVar3);
    if (cVar1 != '\0') break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

