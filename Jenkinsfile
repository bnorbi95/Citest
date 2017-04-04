pipeline{
  agent worker1
  stages{
    stage('Build'){
      steps{
        sh 'make'
      }
    }
    stage('Run'){
      steps{
        sh './main'
      }
    }
  }
}
