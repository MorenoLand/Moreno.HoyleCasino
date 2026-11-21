// FUN_00541740  00541740

uint __fastcall FUN_00541740(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00462ba0(param_1 + 0xe0,3,0);
  if ((uVar1 == 1) && (uVar1 = FUN_004630c0(param_1 + 0xe0,0,3), uVar1 == 0xc)) {
    return 1;
  }
  return uVar1 & 0xffffff00;
}

