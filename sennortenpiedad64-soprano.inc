\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1
		\clef "treble"
		R1.*4  |
		\transpose c'' c' {
		%% 5
		r1 r4 a''  |
		a'' 1 ~ a'' 4 a''  |
		g'' 1.  |
		g'' 2 g'' 4 g'' e'' g''  |
		a'' 2. a'' ~  |
		%% 10
		a'' 1 r4 a''  |
		a'' 1 ~ a'' 4 a''  |
		g'' 1.  |
		g'' 2 g'' 4 g'' e'' g''  |
		a'' 2. a'' ~  |
		%% 15
		a'' 1 r2  |
		a'' 2. a''  |
		g'' 2. g''  |
		a'' 1. ~  |
		a'' 2 r4 e'' 2 e'' 4  |
		%% 20
		f'' 1. (  |
		g'' 2. a'' )  |
		e'' 1. ~  |
		e'' 1 r2  |
		a'' 2. a''  |
		%% 25
		g'' 2. g''  |
		a'' 1. ~  |
		a'' 2 r4 e'' 2 e'' 4  |
		f'' 1. (  |
		g'' 2. a'' )  |
		%% 30
		e'' 1. ~  |
		e'' 2 r r4 a''  |
		a'' 1 ~ a'' 4 a''  |
		g'' 1.  |
		g'' 2 g'' 4 g'' e'' g''  |
		%% 35
		a'' 2. a'' ~  |
		a'' 1 r4 a''  |
		a'' 1 ~ a'' 4 a''  |
		g'' 1.  |
		g'' 2 g'' 4 g'' e'' g''  |
		%% 40
		a'' 2. a'' ~  |
		a'' 1 g'' 4 ( a''  |
		g'' 1. )  |
		R1.  |
		\bar "|."
		} % transpose
	} % Voice
	\lyricsto "soprano" \new Lyrics \lyricmode {
		"Se" -- "ñor," "Se" -- "ñor," "ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."
		"Se" -- "ñor," "Se" -- "ñor," "ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."
		"Cris" -- "to" "ten" "pie" -- "dad" "de" "no" -- "so" __ "tros."
		"Cris" -- "to" "ten" "pie" -- "dad" "de" "no" -- "so" __ "tros."
		"Se" -- "ñor," "Se" -- "ñor," "ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."
		"Se" -- "ñor," "Se" -- "ñor," "ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."
		"Oh." __
	} % Lyrics 3
>> % Staff ends
