// FUN_0058a690  0058a690

void FUN_0058a690(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_var;
  
  cVar1 = '\x02';
  iVar3 = FUN_005fb5e0(0);
  iVar3 = *(int *)(iVar3 + 0x1f0) + -0x30dfbd;
  switch(iVar3) {
  case 0:
    cVar1 = '\x02';
    break;
  case 1:
    cVar1 = '\x05';
    break;
  case 2:
    cVar1 = '\n';
    break;
  case 3:
    cVar1 = '\x02';
  }
  cVar2 = FUN_005e2f60(iVar3,extraout_var);
  if (cVar1 != cVar2) {
    FUN_005de600();
    iVar3 = FUN_005d52e0();
    *(char *)(iVar3 + 0x5e) = cVar1;
    FUN_00637610();
  }
  return;
}

