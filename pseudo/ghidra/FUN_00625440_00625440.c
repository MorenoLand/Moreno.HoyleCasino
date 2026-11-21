// FUN_00625440  00625440

undefined4 __fastcall FUN_00625440(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x2c))(local_10,0,0,0,0,0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x28))(local_8,local_c);
    uVar2 = FUN_00686cc0();
  }
  return uVar2;
}

