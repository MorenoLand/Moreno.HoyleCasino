// FUN_006631e0  006631e0

void __fastcall FUN_006631e0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1c))(1000000);
    (**(code **)(*param_1 + 4))(1);
  }
  else {
    iVar1 = FUN_005fc360();
    if (iVar1 == 1) {
      FUN_0062fde0(">>> Target hit!\n");
      FUN_005fc2a0(0);
      (**(code **)(*param_1 + 0x1c))(1000000);
      (**(code **)(*param_1 + 4))(1);
      FUN_006622a0();
    }
  }
  return;
}

