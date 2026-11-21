// FUN_005b5c30  005b5c30

undefined1 __fastcall FUN_005b5c30(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    iVar3 = FUN_005b5fb0(0xffffffff);
    uVar2 = *(undefined1 *)(iVar3 + 0xc);
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}

