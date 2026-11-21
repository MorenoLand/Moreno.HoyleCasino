// FUN_0065de80  0065de80

undefined4 __fastcall FUN_0065de80(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*DAT_0162ee84 + 200))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0x36;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}

