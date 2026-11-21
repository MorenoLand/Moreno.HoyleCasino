// FUN_005e3dc0  005e3dc0

void FUN_005e3dc0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = FUN_005de860();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_005fb350(3200000);
    (**(code **)(*piVar2 + 0xf4))();
  }
  FUN_006375b0();
  iVar3 = FUN_005d52e0();
  if (*(char *)(iVar3 + 0x5d) == '\0') {
    piVar2 = (int *)FUN_005fb350(0x30d401);
    (**(code **)(*piVar2 + 0xf4))();
  }
  FUN_00655360();
  if (DAT_00795f94 != '\0') {
    iVar3 = FUN_005fb350(0xc);
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_005fb350(0xc);
      (**(code **)(*piVar2 + 0xcc))();
    }
  }
  return;
}

