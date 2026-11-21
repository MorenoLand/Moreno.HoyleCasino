// FUN_00627760  00627760

void __thiscall FUN_00627760(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_005f54c0();
  if ((cVar1 == '\0') && (cVar1 = FUN_006277f0(param_2,&local_18,&local_10), cVar1 != '\0')) {
    local_8 = CONCAT13(local_8._3_1_,*(undefined3 *)(param_1 + 0x48));
    uVar2 = FUN_00627660();
    local_8 = CONCAT13(uVar2,(undefined3)local_8);
    uVar3 = FUN_006276c0();
    FUN_005f9440(local_18,local_14,local_10,local_c,local_8,uVar3);
  }
  return;
}

