pipeline{
  agent any
  stages{
    stage('Checkout'){
      step{
        checkout scm
      }
    }
    stage('Build'){
      step{
        sh 'gcc -o main main.c'
      }
    }
    stage('Run'){
      step{
        sh './main'
      }
    }
  }
}
