// FUN_005a0190  005a0190

void FUN_005a0190(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 extraout_var;
  undefined1 local_6;
  undefined1 local_5;
  
  cVar1 = FUN_005df700(0xffffffff);
  if (((cVar1 != '\0') && (cVar1 = FUN_005da7b0(extraout_var), cVar1 == '\0')) &&
     (*(int *)(DAT_007935c4 + 0x50) != 0)) {
    puVar4 = &local_6;
    puVar3 = &local_5;
    uVar2 = FUN_005a2020(puVar3,puVar4);
    FUN_0059b080(uVar2,puVar3,puVar4);
    FUN_0059cf00(local_5,local_6);
  }
  return;
}

