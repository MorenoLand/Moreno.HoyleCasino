// FUN_005cb9b0  005cb9b0

void __fastcall FUN_005cb9b0(int *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      (**(code **)(*param_1 + 0xbc))(local_8,local_c);
    }
  }
  return;
}

