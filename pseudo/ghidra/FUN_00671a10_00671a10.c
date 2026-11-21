// FUN_00671a10  00671a10

void __fastcall FUN_00671a10(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_006378e0();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 200))(0x27ac42);
    FUN_005eaf00(0x27ac44);
  }
  else {
    (**(code **)(*param_1 + 200))(0x27ac41);
    FUN_005eaf00(0x27ac43);
  }
  (**(code **)(*(int *)param_1[0x78] + 0x74))();
  FUN_00602500();
  return;
}

