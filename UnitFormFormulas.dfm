object FormFormulas: TFormFormulas
  Left = 0
  Top = 0
  Caption = 'FormFormulas'
  ClientHeight = 387
  ClientWidth = 629
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelMateria1: TLabel
    Left = 96
    Top = 127
    Width = 45
    Height = 13
    Caption = 'Materia 1'
  end
  object Label1: TLabel
    Left = 96
    Top = 175
    Width = 45
    Height = 13
    Caption = 'Materia 2'
  end
  object Label2: TLabel
    Left = 96
    Top = 223
    Width = 45
    Height = 13
    Caption = 'Materia 3'
  end
  object LabelProporcion1: TLabel
    Left = 464
    Top = 146
    Width = 20
    Height = 13
    Caption = '0 %'
  end
  object LabelProporcion2: TLabel
    Left = 464
    Top = 194
    Width = 20
    Height = 13
    Caption = '0 %'
  end
  object LabelProporcion3: TLabel
    Left = 464
    Top = 242
    Width = 20
    Height = 13
    Caption = '0 %'
  end
  object Label3: TLabel
    Left = 280
    Top = 68
    Width = 54
    Height = 13
    Caption = 'Descripci'#243'n'
  end
  object ButtonExit: TButton
    Left = 512
    Top = 337
    Width = 75
    Height = 25
    Caption = 'ButtonExit'
    TabOrder = 0
    OnClick = ButtonExitClick
  end
  object ComboBoxFormula: TComboBox
    Left = 232
    Top = 24
    Width = 145
    Height = 21
    TabOrder = 1
    Text = 'ComboBoxFormula'
    OnChange = ComboBoxFormulaChange
    Items.Strings = (
      'Formula 1'
      'Formula 2'
      'Formula 3'
      'Formula 4'
      'Fomrula 5')
  end
  object LabeledEditNombre: TLabeledEdit
    Left = 96
    Top = 87
    Width = 145
    Height = 21
    EditLabel.Width = 37
    EditLabel.Height = 13
    EditLabel.Caption = 'Nombre'
    TabOrder = 2
  end
  object ComboBoxMateria1: TComboBox
    Left = 96
    Top = 143
    Width = 145
    Height = 21
    TabOrder = 3
    Text = 'ComboBoxMateria1'
    Items.Strings = (
      '1. Maiz'
      '2. Centeno'
      '3. Cebada')
  end
  object ComboBoxMateria2: TComboBox
    Left = 96
    Top = 191
    Width = 145
    Height = 21
    TabOrder = 4
    Text = 'ComboBox2'
    Items.Strings = (
      '1. Maiz'
      '2. Centeno'
      '3. Cebada')
  end
  object ComboBoxMateria3: TComboBox
    Left = 96
    Top = 239
    Width = 145
    Height = 21
    TabOrder = 5
    Text = 'ComboBox2'
    Items.Strings = (
      '1. Maiz'
      '2. Centeno'
      '3. Cebada')
  end
  object GroupBox1: TGroupBox
    Left = 56
    Top = 277
    Width = 219
    Height = 93
    Caption = 'Herramientas'
    TabOrder = 6
    object ButtonRecuperar: TButton
      Left = 11
      Top = 16
      Width = 86
      Height = 25
      Caption = 'Leer Archivo'
      TabOrder = 0
      OnClick = ButtonRecuperarClick
    end
    object Button1: TButton
      Left = 112
      Top = 16
      Width = 89
      Height = 25
      Caption = 'Guardar Archivo'
      TabOrder = 1
      OnClick = Button1Click
    end
    object ButtonSave: TButton
      Left = 11
      Top = 60
      Width = 86
      Height = 25
      Caption = 'ButtonSave'
      TabOrder = 2
      OnClick = ButtonSaveClick
    end
  end
  object TrackBarProporcion1: TTrackBar
    Left = 280
    Top = 143
    Width = 169
    Height = 45
    Max = 100
    Frequency = 5
    TabOrder = 7
    OnChange = TrackBarProporcion1Change
  end
  object TrackBarProporcion2: TTrackBar
    Left = 280
    Top = 191
    Width = 169
    Height = 45
    Max = 100
    Frequency = 5
    TabOrder = 8
    OnChange = TrackBarProporcion2Change
  end
  object TrackBarProporcion3: TTrackBar
    Left = 280
    Top = 242
    Width = 169
    Height = 45
    Max = 100
    Frequency = 5
    TabOrder = 9
    OnChange = TrackBarProporcion3Change
  end
  object EditDescripcion: TEdit
    Left = 280
    Top = 87
    Width = 291
    Height = 21
    TabOrder = 10
    Text = 
      'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam ' +
      'et tortor quis lectus scelerisque porttitor id eget nibh. Donec ' +
      'varius est id neque vestibulum dictum. Duis orci sapien, pretium' +
      ' vitae facilisis feugiat, sollicitudin eget risus. Cum sociis na' +
      'toque penatibus et magnis dis parturient montes, nascetur ridicu' +
      'lus mus. Quisque vel quam nibh. Donec nec sem eu neque pulvinar ' +
      'pellentesque ac convallis turpis. Cras faucibus ipsum sed egesta' +
      's porttitor. Donec aliquam quam at vehicula molestie.'
  end
end
